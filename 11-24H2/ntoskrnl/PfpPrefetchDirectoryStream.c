/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x140936ED4
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     PfpAvailablePagesForPrefetch @ 0x140938C40 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140938C78 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned int v9; // r8d
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // esi
  unsigned int *v15; // r9
  unsigned int v16; // r8d
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  int v23; // r11d
  __int64 v25[2]; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-58h] BYREF
  __int128 v27; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+88h] [rbp-40h]
  unsigned int v29; // [rsp+D0h] [rbp+8h]
  __int64 v30; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v32; // [rsp+F0h] [rbp+28h]
  __int64 v33; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v3 = a1[5];
  v5 = a1[3];
  Handle = 0LL;
  *(_OWORD *)v25 = 0LL;
  v27 = 0LL;
  v28 = 0x200000000LL;
  v7 = *a1;
  v8 = 0LL;
  LODWORD(v30) = 0;
  v9 = *(unsigned __int16 *)(v7 + 30);
  *(_DWORD *)v5 = 4;
  v29 = v9;
  LOBYTE(v7) = v9;
  v10 = v32;
  v11 = (8 * (unsigned int)(v7 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  LODWORD(v7) = v33;
  *(_QWORD *)(v5 + 8) = v11;
  v12 = PfpOpenHandleCreate((unsigned int)&Handle, v3, *(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 8), 1048577, v7, 0, a2);
  if ( v12 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v13, (__int64 *)va);
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= *(_DWORD *)(a3 + 16) )
        goto LABEL_7;
      *(_DWORD *)(v5 + 4) = 0;
      if ( v14 >= *(_DWORD *)(a3 + 16) )
        goto LABEL_7;
      v15 = (unsigned int *)(a1 + 4);
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = *(_QWORD *)(a3 + 24);
        v19 = *(_QWORD *)(v18 + 16LL * v14);
        v20 = v8;
        v21 = v19 + *(unsigned int *)(v18 + 16LL * v14 + 8);
        v22 = v16;
        v16 = v17;
        if ( v19 >= v8 )
          v20 = v19;
        while ( v20 < v21 )
        {
          *(_QWORD *)(v5 + 8 * v22 + 16) = v20;
          v15 = (unsigned int *)(a1 + 4);
          v20 += 4096LL;
          v16 = *(_DWORD *)(v5 + 4) + 1;
          *(_DWORD *)(v5 + 4) = v16;
          v22 = v16;
          if ( v16 >= *((_DWORD *)a1 + 8) )
          {
            v8 = v20;
            break;
          }
        }
        v17 = v16;
        if ( v16 >= *v15 )
          break;
        ++v14;
      }
      while ( v14 < *(_DWORD *)(a3 + 16) );
      if ( !v16 )
        goto LABEL_7;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v29) )
      {
        v12 = -1073741248;
        goto LABEL_25;
      }
      v12 = IopXxxControlFile(
              Handle,
              0LL,
              0LL,
              0LL,
              (struct _IO_STATUS_BLOCK *)v25,
              0x90120u,
              (char *)v5,
              8 * v23 + 16,
              0LL,
              0,
              0,
              0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v5 + 4));
      if ( v12 < 0 )
        break;
      if ( v12 == 259 )
        KeBugCheckEx(0x191u, 0x15AEuLL, 0LL, 0LL, 0LL);
    }
    if ( v12 == -1073741807 )
LABEL_7:
      v12 = 0;
  }
LABEL_25:
  if ( (v28 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&Handle, v3);
  return (unsigned int)v12;
}
