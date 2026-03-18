/*
 * XREFs of HmgAllocFast @ 0x1401C21B0
 * Callers:
 *     HmgAlloc @ 0x140173F20 (HmgAlloc.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140175260 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x140016A30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x14007AA44 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x140084620 (HmgDecProcessHandleCount.c)
 *     EtwTraceGdiCreateHandle @ 0x1400CACFC (EtwTraceGdiCreateHandle.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     IsUMPDGetThreadClientPIDSupported @ 0x140147F24 (IsUMPDGetThreadClientPIDSupported.c)
 *     FreeObject @ 0x1401482A0 (FreeObject.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C19A0 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C1F94 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C4F84 (HmgIncProcessHandleCountExFast.c)
 */

struct HOBJ__ *__fastcall HmgAllocFast(
        struct Gre::Base::SESSION_GLOBALS *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  unsigned int v4; // r13d
  __int64 v7; // rcx
  struct OBJECT *ObjectFast; // r15
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _GRETHREAD *v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // edi
  struct HOBJ__ *v15; // rbx
  unsigned int EtwGdiHandleType; // eax
  __int64 v17; // r9
  HSEMAPHORE v19[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = a3;
  ObjectFast = (struct OBJECT *)AllocateObjectFast(a1, a2, a3);
  if ( !ObjectFast )
    return 0LL;
  CurrentThread = GreGetCurrentThread(v7);
  v12 = CurrentThread;
  if ( CurrentThread
    && (a4 & 0x10) == 0
    && *((_QWORD *)CurrentThread + 8)
    && (int)IsUMPDGetThreadClientPIDSupported(v11, v10) >= 0 )
  {
    v14 = (unsigned int)UMPDGetThreadClientPID((__int64)v12, v13);
  }
  else
  {
    v14 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  SEMOBJ<20>::SEMOBJ<20>(v19, a1);
  if ( (a4 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountExFast(a1, v14, 0LL) )
  {
LABEL_18:
    SEMOBJ<20>::vUnlock(v19);
    FreeObject((__int64)ObjectFast, v4);
    return 0LL;
  }
  v20 = 0;
  if ( !HmgpAcquireHandleIndex(a1, v12, &v20) )
  {
    if ( (a4 & 8) == 0 )
      HmgDecProcessHandleCount(v14);
    goto LABEL_18;
  }
  v15 = ENTRYOBJ::hSetupFast((GdiHandleManager **)a1, ObjectFast, v4, a4, v20);
  if ( (a4 & 8) != 0 )
    v14 = 0;
  EtwGdiHandleType = GetEtwGdiHandleType(v4);
  EtwTraceGdiCreateHandle((__int64)v15, EtwGdiHandleType, v14, v17);
  if ( (a4 & 3) != 0 )
    v15 = ObjectFast;
  SEMOBJ<20>::vUnlock(v19);
  return v15;
}
