/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029A0BC
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02CDB14 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00C7CC4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0264924 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0299DB0 (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0299E80 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // rsi
  __int64 v14; // rbx
  struct OBJECT *Object; // r15
  Gre::Base *v16; // rcx
  int v17; // eax
  __int64 (__fastcall *v18)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v23[4]; // [rsp+50h] [rbp-99h] BYREF
  int v24; // [rsp+70h] [rbp-79h]
  _QWORD v25[2]; // [rsp+78h] [rbp-71h] BYREF
  _BYTE v26[40]; // [rsp+88h] [rbp-61h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-39h]
  __int64 v28; // [rsp+B8h] [rbp-31h]
  _BYTE v29[32]; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-1h]

  v9 = 0LL;
  v10 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( v14 )
  {
    Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
    if ( Object )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v29);
      v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v29, Object, 0xEu, 2);
      if ( v9 )
      {
        *((_QWORD *)this + 4) = Object;
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
        v24 = 1;
        v28 = 0LL;
        v27 = 0LL;
        v25[0] = 0LL;
        v17 = *(_DWORD *)(v14 + 40);
        *(_OWORD *)&v23[1] = 0LL;
        if ( (v17 & 1) != 0 )
        {
          Gre::Base::Globals(v16);
          v23[1] = *(_QWORD *)(v14 + 48);
          v23[3] = v14;
          GreAcquireSemaphore(v23[1]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v23[1], 11LL);
        }
        v18 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v14 + 3176);
        if ( v18 )
        {
          v10 = v18(*(_QWORD *)(v14 + 1768), a3, a4, a5, a6, a7, a8, a9, 0);
          if ( v10 )
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v10;
            XDCOBJ::bAddColorTransform(a2, v9);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23[1], v19, v20, v21);
        if ( v25[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v25);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
      }
      if ( v30 )
        _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
      if ( v9 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
          COLORTRANSFORMOBJ::bDelete(this, a2);
          return 0LL;
        }
      }
      else
      {
        FreeObject(Object, 14LL);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
