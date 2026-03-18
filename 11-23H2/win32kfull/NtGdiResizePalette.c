/*
 * XREFs of NtGdiResizePalette @ 0x1C02D1C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C000741C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0026F2C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00C2438 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00C2510 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C7BC (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C013F650 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02C13F0 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02D7DBC (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  BOOL IsPalDefault; // eax
  struct PALETTE *v5; // rcx
  int v6; // eax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  HDC v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // rdi
  HDC v21; // rdi
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v23; // [rsp+58h] [rbp-11h] BYREF
  int v24; // [rsp+60h] [rbp-9h]
  _QWORD v25[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v27[7]; // [rsp+88h] [rbp+1Fh] BYREF
  int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  struct PALETTE *v29; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v29, a1);
  if ( v29 )
  {
    IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v29);
    v5 = v29;
    if ( !IsPalDefault )
    {
      v6 = *((_DWORD *)v29 + 6);
      if ( (v6 & 0x100) != 0 )
      {
        if ( (v6 & 0x800) != 0 && a2 != 256 )
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v29);
          return 0LL;
        }
        v24 = 0;
        v23 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
        {
          v22 = *((_QWORD *)Gre::Base::Globals(v8) + 5);
          GreAcquireSemaphore(v22);
          v9 = *((unsigned int *)v29 + 7);
          v10 = *((_DWORD *)v23 + 7);
          if ( (unsigned int)v9 >= v10 )
            v9 = v10;
          memmove((void *)v23[14], *((const void **)v29 + 14), 4 * v9);
          *((_DWORD *)v23 + 6) = *((_DWORD *)v29 + 6);
          v23[5] = *((_QWORD *)v29 + 5);
          v23[6] = *((_QWORD *)v29 + 6);
          *((_DWORD *)v23 + 14) = *((_DWORD *)v29 + 14);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v23);
          GreAcquireHmgrSemaphore(v12, v11, v13, v14);
          v15 = (HDC)v23[5];
          while ( 1 )
          {
            if ( !v15 )
            {
              XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v29);
              XEPALOBJ::vUpdateTime((XEPALOBJ *)&v29);
              v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v23, &v29, v18, v19);
              if ( v3 )
              {
                v16 = v23;
                v15 = (HDC)v23[5];
                while ( v15 )
                {
                  MDCOBJA::MDCOBJA((MDCOBJA *)v27, v15);
                  v16 = (__int64 *)v27[0];
                  if ( !v27[0] )
                    break;
                  *(_QWORD *)(v27[0] + 88LL) = v29;
                  *((_DWORD *)v16 + 79) |= 0xFu;
                  v15 = (HDC)v16[123];
                  v28 = 0;
                  v20 = *v16;
                  HmgDecrementShareReferenceCountEx(v16, &v28);
                  if ( v28 )
                    GrepDeleteDC(v20, 0x2000000LL);
                }
              }
              goto LABEL_27;
            }
            MDCOBJ::MDCOBJ((MDCOBJ *)v25, v15);
            if ( !v25[0] )
              goto LABEL_27;
            v17 = *(unsigned __int16 *)(v25[0] + 12LL);
            if ( (unsigned __int16)v17 > 1u )
              break;
            v15 = *(HDC *)(v25[0] + 984LL);
            XDCOBJ::RestoreAttributes((XDCOBJ *)v25);
            v25[0] = 0LL;
          }
          TraceLoggingWriteUnsupportedGdiUsage(5, *((unsigned int *)v29 + 6), v17, 0LL, 0LL);
          if ( v25[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v25);
LABEL_27:
          v21 = (HDC)v23[5];
          while ( v21 != v15 )
          {
            MDCOBJ::MDCOBJ((MDCOBJ *)v26, v21);
            _InterlockedDecrement((volatile signed __int32 *)(v26[0] + 12LL));
            v21 = *(HDC *)(v26[0] + 984LL);
            XDCOBJ::vUnlockFast((XDCOBJ *)v26);
          }
          GreReleaseHmgrSemaphore(v16);
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
        v5 = v29;
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
  }
  return v3;
}
