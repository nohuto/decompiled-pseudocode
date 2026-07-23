/*
 * XREFs of HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     RtlCmDecodeMemIoResource @ 0x14048FE80 (RtlCmDecodeMemIoResource.c)
 *     HalpDmaGetIommuInterface @ 0x140539F74 (HalpDmaGetIommuInterface.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForDeviceResources(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // r13d
  __int64 v5; // rdx
  struct _DEVICE_OBJECT *v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  char *v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // eax
  _BYTE *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r14
  _DWORD *v17; // r12
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v18; // rcx
  ULONGLONG v19; // rax
  __int64 v20; // r8
  ULONGLONG v21; // rcx
  unsigned __int64 v22; // rax
  ULONGLONG Start; // [rsp+30h] [rbp-49h] BYREF
  char *v25; // [rsp+38h] [rbp-41h]
  struct _DEVICE_OBJECT *v26; // [rsp+40h] [rbp-39h]
  __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+98h] [rbp+1Fh]
  ULONG BufferLength; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v32; // [rsp+F8h] [rbp+7Fh]

  Start = 0LL;
  BufferLength = 0;
  memset_0(&v27, 0, 0x50uLL);
  v3 = 0LL;
  v32 = 0;
  v4 = 0;
  if ( (int)HalpDmaGetIommuInterface(a1, &v27) >= 0 )
  {
    if ( v29 )
    {
      v6 = (struct _DEVICE_OBJECT *)guard_dispatch_icall_no_overrides(v28, v5);
      v26 = v6;
      if ( IoGetDeviceProperty(v6, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
      {
        v25 = (char *)HalpMmAllocCtxAlloc(v7, BufferLength);
        v8 = v25;
        if ( v25 )
        {
          if ( IoGetDeviceProperty(v6, DevicePropertyAllocatedResources, BufferLength, v25, &BufferLength) >= 0 )
          {
            if ( *(_DWORD *)v25 )
            {
              v9 = v25 + 20;
              v10 = *(unsigned int *)v25;
              do
              {
                v11 = *((_DWORD *)v9 - 1);
                if ( v11 )
                {
                  v12 = v9;
                  v13 = v11;
                  do
                  {
                    if ( ((*v12 - 3) & 0xFB) == 0 )
                      ++v4;
                    v12 += 20;
                    --v13;
                  }
                  while ( v13 );
                }
                v9 += 36;
                --v10;
              }
              while ( v10 );
            }
            BufferLength = 32 * v4;
            v3 = HalpMmAllocCtxAlloc((__int64)v9, (unsigned int)(32 * v4));
            if ( v3 )
            {
              v14 = 0LL;
              if ( *(_DWORD *)v25 )
              {
                v15 = v32;
                do
                {
                  v16 = 0LL;
                  v17 = &v8[8 * v14 + 3 + (unsigned int)v14];
                  if ( v17[1] )
                  {
                    do
                    {
                      v18 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v17[4 * v16 + 2 + (unsigned int)v16];
                      if ( ((v18->Type - 3) & 0xFB) == 0 )
                      {
                        v19 = RtlCmDecodeMemIoResource(v18, &Start);
                        v20 = 32LL * v15;
                        if ( a2 == 2 )
                        {
                          v21 = Start - (Start & 0xFFFFFF8000000000uLL);
                          Start &= 0xFFFFFF8000000000uLL;
                          *(_QWORD *)(v20 + v3 + 8) = Start;
                          v22 = ((v21 + v19 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                        }
                        else
                        {
                          *(_QWORD *)(v20 + v3 + 8) = Start & 0xFFFFFFFFFFFFF000uLL;
                          v22 = (v19 >> 12) + ((v19 & 0xFFF) != 0);
                        }
                        *(_QWORD *)(v20 + v3 + 16) = v22;
                        ++v15;
                        *(_BYTE *)(v20 + v3 + 24) = 0;
                        *(_QWORD *)(v20 + v3) = v3 + 32LL * v15;
                      }
                      v16 = (unsigned int)(v16 + 1);
                    }
                    while ( (unsigned int)v16 < v17[1] );
                    v8 = v25;
                  }
                  v14 = (unsigned int)(v14 + 1);
                }
                while ( (unsigned int)v14 < *v8 );
                v6 = v26;
              }
              v9 = (char *)(32LL * (unsigned int)(v4 - 1));
              *(_QWORD *)&v9[v3] = 0LL;
            }
          }
          HalpMmAllocCtxFree((__int64)v9, (__int64)v8);
        }
      }
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
    guard_dispatch_icall_no_overrides(v28, v5);
  }
  return v3;
}
