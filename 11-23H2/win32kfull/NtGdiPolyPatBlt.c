/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C0048EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0049090 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00BDAD8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00C3C10 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013EAA8 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0299D74 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, __int64 a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  int v9; // r14d
  ULONG64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r10
  LONG v15; // r8d
  LONG v16; // r9d
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rax
  struct _RECTL v20; // [rsp+60h] [rbp-C8h] BYREF
  struct _RECTL v21; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v22[6]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 *v24; // [rsp+C8h] [rbp-60h]

  v5 = a4;
  v7 = a2;
  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v22, a1);
      if ( v22[0] )
      {
        if ( (unsigned int)v5 > 0xAAAAAAA )
        {
          v8 = 0;
        }
        else if ( 24 * v5 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = (ULONG64)a3 + 24 * v5;
          if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        if ( v8 )
        {
          if ( ((gajRop3[(unsigned __int8)v7] | gajRop3[BYTE1(v7)]) & 0xB2) != 0 )
          {
            DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
              (DWMSCREENREADMODIFYWRITEASSIST *)v23,
              (struct XDCOBJ *)v22);
            v11 = *v24;
            if ( *v24 && *(_DWORD *)(v11 + 492) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v18 + 1) )
              {
                v15 = *((_DWORD *)a3 + 6 * i + 1);
                v16 = v15 + *((_DWORD *)a3 + 6 * i + 3);
                v17 = *((_DWORD *)a3 + 6 * i + 2);
                v20.left = *((_DWORD *)a3 + 6 * i);
                v20.top = v15;
                v20.right = v20.left + v17;
                v20.bottom = v16;
                ERECTL::vOrder((ERECTL *)&v20);
                if ( v18 )
                  ERECTL::operator|=(&v21, &v20);
                else
                  v21 = v20;
              }
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v21) )
                v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v23, &v21);
            }
          }
          v8 = GrePolyPatBltInternal(
                 (struct XDCOBJ *)v22,
                 v7,
                 a3,
                 v5,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 180LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v22);
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v19 = UserReferenceDwmApiPort(a1, a2, a3);
    DwmSyncFlushAndWaitForBatch(v19);
  }
  return v8;
}
