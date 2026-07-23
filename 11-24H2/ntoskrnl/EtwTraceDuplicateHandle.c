/*
 * XREFs of EtwTraceDuplicateHandle @ 0x140A3C190
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x140891E74 (ObInheritObjectHandle.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140487710 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceDuplicateHandle(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v7; // r10d
  __int64 v8; // rax
  int v9; // r14d
  unsigned int v12; // r9d
  bool v13; // zf
  __int64 v14; // r11
  __int64 v15; // r8
  unsigned __int16 *v16; // rbx
  unsigned int v17; // edi
  int v18; // r8d
  char v19; // r11
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  _TBYTE v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int128 *v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]

  v22 = 0.0;
  v7 = 0;
  LODWORD(v8) = EtwpHostSiloState;
  v9 = *(_DWORD *)(a6 + 192);
  v23 = a1;
  v21 = 0LL;
  v12 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v13 = !_BitScanForward((unsigned int *)&v14, v12);
  if ( !v13 )
  {
    do
    {
      v12 &= v12 - 1;
      v8 = 32LL * (unsigned int)v14 + EtwpHostSiloState + 4556;
      if ( v8 )
      {
        LODWORD(v8) = *(_DWORD *)(v8 + 16);
        if ( (v8 & 0x40) != 0 )
        {
          LODWORD(v8) = 5 * v14;
          v15 = 0LL;
          v16 = (unsigned __int16 *)((char *)&EtwpObjectTypeFilter + 20 * v14);
          v17 = *v16;
          while ( (unsigned int)v15 < v17 )
          {
            LODWORD(v8) = ExCheckSingleFilter(v9, *(_DWORD *)&v16[2 * v15 + 2]);
            if ( (_DWORD)v8 )
            {
              LODWORD(v8) = 1 << v19;
              v7 |= 1 << v19;
              break;
            }
            v15 = (unsigned int)(v18 + 1);
          }
        }
      }
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
    }
    while ( !v13 );
    if ( v7 )
    {
      v26 = 0;
      *((_QWORD *)&v21 + 1) = __PAIR64__(a2, v23);
      LODWORD(v22) = a5;
      WORD2(v22) = *(unsigned __int8 *)(a6 + 40);
      v24 = &v21;
      *(_QWORD *)&v21 = a3;
      *(_DWORD *)((char *)&v22 + 6) = a4;
      v25 = 26;
      LODWORD(v8) = EtwpTraceKernelEventWithFilter((__int64)&v24, 1u, v7, 4386, 0x10601903u);
    }
  }
  return v8;
}
