/*
 * XREFs of HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4
 * Callers:
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     RtlCmDecodeMemIoResource @ 0x1404955C0 (RtlCmDecodeMemIoResource.c)
 *     HalpDmaGetIommuInterface @ 0x14053C6E8 (HalpDmaGetIommuInterface.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForDeviceResources(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _DEVICE_OBJECT *v8; // r15
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  char *v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // eax
  _BYTE *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned int v17; // r15d
  __int64 v18; // r14
  _DWORD *v19; // r12
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v20; // rcx
  ULONGLONG v21; // rax
  __int64 v22; // r8
  ULONGLONG v23; // rcx
  unsigned __int64 v24; // rax
  ULONGLONG Start; // [rsp+30h] [rbp-49h] BYREF
  char *v27; // [rsp+38h] [rbp-41h]
  struct _DEVICE_OBJECT *v28; // [rsp+40h] [rbp-39h]
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp+1Fh]
  ULONG BufferLength; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+F8h] [rbp+7Fh]

  Start = 0LL;
  BufferLength = 0;
  memset_0(&v29, 0, 0x50uLL);
  v3 = 0LL;
  v34 = 0;
  v4 = 0;
  if ( (int)HalpDmaGetIommuInterface(a1, &v29) >= 0 )
  {
    if ( v31 )
    {
      v8 = (struct _DEVICE_OBJECT *)guard_dispatch_icall_no_overrides(v30, v5, v6, v7);
      v28 = v8;
      if ( IoGetDeviceProperty(v8, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
      {
        v27 = (char *)HalpMmAllocCtxAlloc(v9, BufferLength);
        v10 = v27;
        if ( v27 )
        {
          if ( IoGetDeviceProperty(v8, DevicePropertyAllocatedResources, BufferLength, v27, &BufferLength) >= 0 )
          {
            if ( *(_DWORD *)v27 )
            {
              v11 = v27 + 20;
              v12 = *(unsigned int *)v27;
              do
              {
                v13 = *((_DWORD *)v11 - 1);
                if ( v13 )
                {
                  v14 = v11;
                  v15 = v13;
                  do
                  {
                    if ( ((*v14 - 3) & 0xFB) == 0 )
                      ++v4;
                    v14 += 20;
                    --v15;
                  }
                  while ( v15 );
                }
                v11 += 36;
                --v12;
              }
              while ( v12 );
            }
            BufferLength = 32 * v4;
            v3 = HalpMmAllocCtxAlloc((__int64)v11, (unsigned int)(32 * v4));
            if ( v3 )
            {
              v16 = 0LL;
              if ( *(_DWORD *)v27 )
              {
                v17 = v34;
                do
                {
                  v18 = 0LL;
                  v19 = &v10[8 * v16 + 3 + (unsigned int)v16];
                  if ( v19[1] )
                  {
                    do
                    {
                      v20 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v19[4 * v18 + 2 + (unsigned int)v18];
                      if ( ((v20->Type - 3) & 0xFB) == 0 )
                      {
                        v21 = RtlCmDecodeMemIoResource(v20, &Start);
                        v22 = 32LL * v17;
                        if ( a2 == 2 )
                        {
                          v23 = Start - (Start & 0xFFFFFF8000000000uLL);
                          Start &= 0xFFFFFF8000000000uLL;
                          *(_QWORD *)(v22 + v3 + 8) = Start;
                          v24 = ((v23 + v21 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                        }
                        else
                        {
                          *(_QWORD *)(v22 + v3 + 8) = Start & 0xFFFFFFFFFFFFF000uLL;
                          v24 = (v21 >> 12) + ((v21 & 0xFFF) != 0);
                        }
                        *(_QWORD *)(v22 + v3 + 16) = v24;
                        ++v17;
                        *(_BYTE *)(v22 + v3 + 24) = 0;
                        *(_QWORD *)(v22 + v3) = v3 + 32LL * v17;
                      }
                      v18 = (unsigned int)(v18 + 1);
                    }
                    while ( (unsigned int)v18 < v19[1] );
                    v10 = v27;
                  }
                  v16 = (unsigned int)(v16 + 1);
                }
                while ( (unsigned int)v16 < *v10 );
                v8 = v28;
              }
              v11 = (char *)(32LL * (unsigned int)(v4 - 1));
              *(_QWORD *)&v11[v3] = 0LL;
            }
          }
          HalpMmAllocCtxFree((__int64)v11, (__int64)v10);
        }
      }
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    }
    guard_dispatch_icall_no_overrides(v30, v5, v6, v7);
  }
  return v3;
}
