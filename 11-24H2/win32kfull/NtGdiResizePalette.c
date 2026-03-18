/*
 * XREFs of NtGdiResizePalette @ 0x14010EC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD250 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x14010EF50 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EFA0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140171324 (--0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiResizePalette(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int locked; // edi
  bool v4; // zf
  __int64 v5; // rax
  int v6; // ecx
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  HDC v12; // rbx
  __int64 v13; // rsi
  OBJECT *v14; // rcx
  HDC v15; // rsi
  int v16; // [rsp+20h] [rbp-79h]
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  int v18; // [rsp+58h] [rbp-41h]
  HSEMAPHORE v19[2]; // [rsp+60h] [rbp-39h] BYREF
  OBJECT *v20[16]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v21; // [rsp+110h] [rbp+77h] BYREF
  __int64 v22; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 0x3FF )
    return 0LL;
  LOBYTE(a2) = 8;
  locked = 0;
  v21 = HmgShareLockCheck(a1, a2);
  if ( v21 )
  {
    v4 = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v21) == 0;
    v5 = v21;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v21 + 24);
      if ( (v6 & 0x100) != 0 )
      {
        if ( (v6 & 0x800) != 0 && v2 != 256 )
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v21);
          return 0LL;
        }
        v18 = 0;
        v17 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v17, 1u, v2, 0LL, 0, 0, 0, 0x500u, 1) )
        {
          v9 = Gre::Base::Globals(v8);
          SEMOBJ<13>::SEMOBJ<13>(v19, v9);
          v10 = *(unsigned int *)(v21 + 28);
          v11 = *(_DWORD *)(v17 + 28);
          if ( (unsigned int)v10 >= v11 )
            v10 = v11;
          memmove(*(void **)(v17 + 112), *(const void **)(v21 + 112), 4 * v10);
          *(_DWORD *)(v17 + 24) = *(_DWORD *)(v21 + 24);
          *(_QWORD *)(v17 + 40) = *(_QWORD *)(v21 + 40);
          *(_QWORD *)(v17 + 48) = *(_QWORD *)(v21 + 48);
          *(_DWORD *)(v17 + 56) = *(_DWORD *)(v21 + 56);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v17);
          SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v22);
          v12 = *(HDC *)(v17 + 40);
          while ( v12 )
          {
            APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, v12);
            if ( !v20[0] )
            {
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
              goto LABEL_23;
            }
            v12 = (HDC)*((_QWORD *)v20[0] + 123);
            XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
            v20[0] = 0LL;
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
          }
          XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v21);
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v21);
          v13 = v21;
          LOBYTE(v16) = 8;
          locked = HmgSwapLockedHandleContents(*(_QWORD *)v17, 1LL, *(_QWORD *)v21, 1LL, v16);
          if ( locked )
          {
            v21 = v17;
            v17 = v13;
            v12 = *(HDC *)(v13 + 40);
            while ( v12 )
            {
              MDCOBJA::MDCOBJA(v20, v12);
              v14 = v20[0];
              if ( !v20[0] )
              {
                XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v20);
                break;
              }
              *((_QWORD *)v20[0] + 11) = v21;
              *((_DWORD *)v14 + 79) |= 0xFu;
              v12 = (HDC)*((_QWORD *)v14 + 123);
              XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v20);
            }
          }
LABEL_23:
          v15 = *(HDC *)(v17 + 40);
          while ( v15 != v12 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v20, v15);
            OBJECT::InterlockedDecrementExclusiveLockCount(v20[0]);
            v15 = (HDC)*((_QWORD *)v20[0] + 123);
            DCOBJ::~DCOBJ((DCOBJ *)v20);
          }
          if ( v22 )
            GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v22);
          SEMOBJ<13>::vUnlock(v19);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
        v5 = v21;
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
  }
  return locked;
}
