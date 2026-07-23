/*
 * XREFs of MiCreateSlabAllocationsFromLoaderBlock @ 0x140C5B5B4
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateSlabAllocationsFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 i; // rdi
  int v3; // eax
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbp
  int v8; // ebx
  ULONG_PTR v9; // r15
  unsigned int v10; // ebx
  int BootSlabEntries; // ecx
  _QWORD **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rbx
  _BYTE v17[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A0h]

  if ( (dword_140E38D44 & 8) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 360);
    if ( (v1 & 1) != 0 )
    {
      if ( v1 == 1 )
        i = 0LL;
      else
        i = v1 ^ ((a1 + 352) | 1);
    }
    else
    {
      i = *(_QWORD *)(a1 + 360);
    }
    while ( i )
    {
      v3 = *(_DWORD *)(i + 24);
      if ( v3 == 29 || v3 == 36 )
      {
        v4 = *(_QWORD *)(i + 40);
        v5 = *(_QWORD *)(i + 32);
        if ( ((v5 | v4) & 0x1FF) != 0
          || !v5
          || !v4
          || (v6 = v4 + v5, v4 + v5 < v5)
          || (v7 = v6 - 1, v6 - 1 > qword_140E2DD20) )
        {
          KeBugCheckEx(0x1Au, 0x3030311uLL, v5, v4, 0LL);
        }
        v8 = MiPageToNode(*(_QWORD *)(i + 32));
        v9 = v4;
        if ( v8 != (unsigned int)MiPageToNode(v7) )
          v9 = 512LL;
        while ( v4 )
        {
          v10 = MiPageToNode(v5);
          if ( v10 != (unsigned int)MiPageToNode(v9 + v5 - 1) )
            KeBugCheckEx(0x1Au, 0x3030316uLL, v5, v9, v10);
          BootSlabEntries = MiCreateBootSlabEntries(qword_140E38D50 + 16160 + 57216LL * v10, v5, v9, 0);
          if ( BootSlabEntries < 0 )
            return (unsigned int)BootSlabEntries;
          v4 -= v9;
          v5 += v9;
        }
      }
      v12 = *(_QWORD ***)(i + 8);
      v13 = i;
      if ( v12 )
      {
        v14 = *v12;
        for ( i = *(_QWORD *)(i + 8); v14; v14 = (_QWORD *)*v14 )
          i = (unsigned __int64)v14;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v13 )
            break;
          v13 = i;
        }
      }
    }
  }
  BootSlabEntries = 0;
  if ( (MiFlags & 0x4000) != 0 )
  {
    v15 = (unsigned int)dword_140E38D44;
    memset_0(v17, 0, 0x68uLL);
    v18 = (v15 >> 3) & 1;
    return (unsigned int)VslpEnterIumSecureMode(2u, 0xDDu, 0, (__int64)v17);
  }
  return (unsigned int)BootSlabEntries;
}
