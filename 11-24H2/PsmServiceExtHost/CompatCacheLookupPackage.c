/*
 * XREFs of CompatCacheLookupPackage @ 0x18003FF3C
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     CompatCachepGetPackageAlias @ 0x180040310 (CompatCachepGetPackageAlias.c)
 *     RtlAllocateHeap_0 @ 0x1800731F0 (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x1800731FC (RtlFreeHeap_0.c)
 *     RtlInitUnicodeStringEx_0 @ 0x180073220 (RtlInitUnicodeStringEx_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CompatCacheLookupPackage(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  WCHAR *ProcessHeap; // r15
  _OWORD *v7; // r13
  int PackageAlias; // ebx
  NTSTATUS inited; // eax
  char *v10; // rdi
  SIZE_T v11; // rsi
  unsigned int v12; // r12d
  char *v13; // rax
  char *Heap; // rbx
  int v15; // eax
  unsigned __int64 v16; // r14
  int v17; // eax
  char *v19; // rax
  char *v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rbx
  _OWORD *Heap_0; // rax
  _OWORD *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm1
  WCHAR *SourceString; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR SourceString_8[2]; // [rsp+30h] [rbp-D8h]
  __int128 v32; // [rsp+40h] [rbp-C8h]
  __int128 v33; // [rsp+50h] [rbp-B8h]
  _DWORD v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  __int16 v36; // [rsp+90h] [rbp-78h]
  char *v37; // [rsp+1E0h] [rbp+D8h]
  unsigned int v38; // [rsp+1E8h] [rbp+E0h]

  *(_OWORD *)SourceString_8 = 0LL;
  ProcessHeap = (WCHAR *)NtCurrentPeb()->ProcessHeap;
  SourceString_8[0] = ProcessHeap;
  v32 = 0LL;
  v33 = 0LL;
  memset_0(v34, 0, 0x188uLL);
  SourceString = 0LL;
  v7 = 0LL;
  PackageAlias = CompatCachepGetPackageAlias(&SourceString, a3, a4);
  if ( PackageAlias < 0 )
  {
LABEL_23:
    v10 = (char *)*((_QWORD *)&v33 + 1);
    goto LABEL_18;
  }
  v34[0] = 1;
  inited = RtlInitUnicodeStringEx_0(&DestinationString, SourceString);
  v10 = (char *)*((_QWORD *)&v33 + 1);
  PackageAlias = inited;
  if ( inited >= 0 )
  {
    v34[1] = 0;
    v11 = v32;
    v12 = 4096;
    v36 = -31132;
    while ( 1 )
    {
      if ( v12 > v11 )
      {
        if ( (unsigned __int64)v12 + 4095 < v12 )
          goto LABEL_15;
        v11 = (v12 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
        if ( v10 )
        {
          Heap = (char *)RtlReAllocateHeap(ProcessHeap, 0, v10, v11);
        }
        else
        {
          v13 = (char *)RtlAllocateHeap(ProcessHeap, 0, v11);
          Heap = v13;
          if ( v13 )
            memset_0(v13, 0, v11);
        }
        if ( !Heap )
          goto LABEL_43;
        v10 = Heap;
        *((_QWORD *)&v33 + 1) = Heap;
      }
      v37 = v10;
      v38 = v12;
      v15 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))g_CompatCacheServiceApi)(0LL, v34);
      PackageAlias = v15;
      if ( v15 != -1073741789 )
        break;
      v12 = v38;
    }
    if ( v15 >= 0 )
    {
      v16 = v38;
      if ( v38 <= v11 )
        goto LABEL_29;
      if ( (unsigned __int64)v38 + 4095 < v38 )
      {
LABEL_15:
        PackageAlias = -1073741675;
        goto LABEL_18;
      }
      if ( v10 )
      {
        v20 = (char *)RtlReAllocateHeap(ProcessHeap, 0, v10, (v38 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        v19 = (char *)RtlAllocateHeap(ProcessHeap, 0, (v38 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        v20 = v19;
        if ( v19 )
          memset_0(v19, 0, (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      }
      if ( v20 )
      {
        v10 = v20;
        *((_QWORD *)&v33 + 1) = v20;
LABEL_29:
        v21 = 0LL;
        do
        {
          if ( v21 <= v16 )
          {
            v22 = v21 + 8;
            if ( v21 + 8 >= v21 && v22 <= v16 )
            {
              v23 = *(_QWORD *)&v10[v21];
              v24 = v22 + HIDWORD(v23);
              if ( v24 >= v22 && v24 + 3 >= v24 )
              {
                v21 = (v24 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v21 <= v16 )
                  continue;
              }
            }
          }
          goto LABEL_16;
        }
        while ( (_DWORD)v23 != 1 );
        v25 = &v10[v22];
        if ( HIDWORD(v23) != 456 )
        {
LABEL_16:
          v17 = 0;
LABEL_17:
          PackageAlias = 0;
          *a1 = v7;
          *a2 = v17;
          goto LABEL_18;
        }
        Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x1C8uLL);
        v7 = Heap_0;
        if ( Heap_0 )
        {
          v27 = Heap_0;
          v28 = 3LL;
          do
          {
            *v27 = *(_OWORD *)v25;
            v27[1] = *((_OWORD *)v25 + 1);
            v27[2] = *((_OWORD *)v25 + 2);
            v27[3] = *((_OWORD *)v25 + 3);
            v27[4] = *((_OWORD *)v25 + 4);
            v27[5] = *((_OWORD *)v25 + 5);
            v27[6] = *((_OWORD *)v25 + 6);
            v27 += 8;
            v29 = *((_OWORD *)v25 + 7);
            v25 += 128;
            *(v27 - 1) = v29;
            --v28;
          }
          while ( v28 );
          v10 = (char *)*((_QWORD *)&v33 + 1);
          ProcessHeap = (WCHAR *)SourceString_8[0];
          *v27 = *(_OWORD *)v25;
          v27[1] = *((_OWORD *)v25 + 1);
          v27[2] = *((_OWORD *)v25 + 2);
          v27[3] = *((_OWORD *)v25 + 3);
          *((_QWORD *)v27 + 8) = *((_QWORD *)v25 + 8);
          v17 = 456;
          goto LABEL_17;
        }
        ProcessHeap = (WCHAR *)SourceString_8[0];
        PackageAlias = -1073741801;
        goto LABEL_23;
      }
LABEL_43:
      PackageAlias = -1073741801;
    }
  }
LABEL_18:
  if ( SourceString )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, SourceString);
    v10 = (char *)*((_QWORD *)&v33 + 1);
    ProcessHeap = (WCHAR *)SourceString_8[0];
  }
  if ( v10 )
    RtlFreeHeap(ProcessHeap, 0, v10);
  return (unsigned int)PackageAlias;
}
