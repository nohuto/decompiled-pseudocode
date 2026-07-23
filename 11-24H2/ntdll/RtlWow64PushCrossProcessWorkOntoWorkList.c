/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoWorkList @ 0x180146FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoWorkList(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  char v15; // [rsp+20h] [rbp-A8h]
  char v16; // [rsp+21h] [rbp-A7h]
  signed __int64 v17; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v18; // [rsp+30h] [rbp-98h]
  unsigned __int64 v19; // [rsp+38h] [rbp-90h]
  int v20; // [rsp+40h] [rbp-88h]
  signed __int64 i; // [rsp+48h] [rbp-80h]
  __int64 v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+78h] [rbp-50h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v15 = 0;
  v18 = 0LL;
  v16 = 0;
  v5 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
  v7 = a2 + 40;
  if ( v6 <= ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) || v7 <= a2 || a2 < v5 || v7 > v6 )
LABEL_29:
    RtlRaiseStatus(-1073741811);
  v20 = a2 - (_DWORD)a1;
  for ( i = *a1; ; i = v12 )
  {
    LODWORD(v17) = i;
    if ( (int)i >= 0 )
    {
      v8 = i & 0x7FFFFFFF;
      if ( *(_DWORD *)(a2 + 4) == 8 && v8 && *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) >= *(_QWORD *)(a2 + 8) )
      {
        v22 = *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
        v9 = (unsigned __int64)a1 + v8;
        v18 = v9;
        if ( v9 + 40 < v9 || v9 < v5 || v9 + 40 > v6 )
          goto LABEL_29;
        if ( *(_DWORD *)(v9 + 4) == 8 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          v11 = *(_QWORD *)(v9 + 16);
          if ( v11 + v10 >= v10 && *(_QWORD *)(a2 + 8) == v11 + v10 )
          {
            if ( !v16 )
            {
              v23 = *(_OWORD *)a2;
              v24 = *(_OWORD *)(a2 + 16);
              v25 = *(_QWORD *)(a2 + 32);
              v16 = 1;
            }
            *(_DWORD *)a2 = *(_DWORD *)v9;
            *(_QWORD *)(a2 + 8) = v10;
            *(_QWORD *)(a2 + 16) = v22 - v10;
            v15 = 1;
          }
        }
      }
      if ( v15 )
      {
        v19 = v18;
      }
      else
      {
        *(_DWORD *)a2 = i & 0x7FFFFFFF;
        v19 = 0LL;
      }
      LODWORD(v17) = v20 & 0x7FFFFFFF | i & 0x80000000;
    }
    else
    {
      v19 = a2;
    }
    v13 = i;
    HIDWORD(v17) = HIDWORD(i) + 1;
    v12 = _InterlockedCompareExchange64(a1, v17, i);
    if ( v13 == v12 )
      break;
    if ( v15 )
    {
      *(_OWORD *)a2 = v23;
      *(_OWORD *)(a2 + 16) = v24;
      *(_QWORD *)(a2 + 32) = v25;
      v15 = 0;
    }
  }
  *a3 = v19;
  return 1;
}
