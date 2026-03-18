/*
 * XREFs of HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14054DE6C (HalpDmaAllocateDomain.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     RtlCmDecodeMemIoResource @ 0x140495FB0 (RtlCmDecodeMemIoResource.c)
 *     HalpDmaGetIommuInterface @ 0x140539EE4 (HalpDmaGetIommuInterface.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForDeviceResources(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // r13d
  struct _DEVICE_OBJECT *v5; // r15
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  char *v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  _BYTE *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // r14
  _DWORD *v16; // r12
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v17; // rcx
  ULONGLONG v18; // rax
  __int64 v19; // r8
  ULONGLONG v20; // rcx
  unsigned __int64 v21; // rax
  ULONGLONG Start; // [rsp+30h] [rbp-49h] BYREF
  char *v24; // [rsp+38h] [rbp-41h]
  struct _DEVICE_OBJECT *v25; // [rsp+40h] [rbp-39h]
  _BYTE v26[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v27; // [rsp+58h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp+1Fh]
  ULONG BufferLength; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v31; // [rsp+F8h] [rbp+7Fh]

  Start = 0LL;
  BufferLength = 0;
  memset_0(v26, 0, 0x50uLL);
  v3 = 0LL;
  v31 = 0;
  v4 = 0;
  if ( (int)HalpDmaGetIommuInterface(a1, (__int64)v26) >= 0 )
  {
    if ( v28 )
    {
      v5 = (struct _DEVICE_OBJECT *)guard_dispatch_icall_no_overrides(v27);
      v25 = v5;
      if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
      {
        v24 = (char *)HalpMmAllocCtxAlloc(v6, BufferLength);
        v7 = v24;
        if ( v24 )
        {
          if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, BufferLength, v24, &BufferLength) >= 0 )
          {
            if ( *(_DWORD *)v24 )
            {
              v8 = v24 + 20;
              v9 = *(unsigned int *)v24;
              do
              {
                v10 = *((_DWORD *)v8 - 1);
                if ( v10 )
                {
                  v11 = v8;
                  v12 = v10;
                  do
                  {
                    if ( ((*v11 - 3) & 0xFB) == 0 )
                      ++v4;
                    v11 += 20;
                    --v12;
                  }
                  while ( v12 );
                }
                v8 += 36;
                --v9;
              }
              while ( v9 );
            }
            BufferLength = 32 * v4;
            v3 = HalpMmAllocCtxAlloc((__int64)v8, (unsigned int)(32 * v4));
            if ( v3 )
            {
              v13 = 0LL;
              if ( *(_DWORD *)v24 )
              {
                v14 = v31;
                do
                {
                  v15 = 0LL;
                  v16 = &v7[8 * v13 + 3 + (unsigned int)v13];
                  if ( v16[1] )
                  {
                    do
                    {
                      v17 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v16[4 * v15 + 2 + (unsigned int)v15];
                      if ( ((v17->Type - 3) & 0xFB) == 0 )
                      {
                        v18 = RtlCmDecodeMemIoResource(v17, &Start);
                        v19 = 32LL * v14;
                        if ( a2 == 2 )
                        {
                          v20 = Start - (Start & 0xFFFFFF8000000000uLL);
                          Start &= 0xFFFFFF8000000000uLL;
                          *(_QWORD *)(v19 + v3 + 8) = Start;
                          v21 = ((v20 + v18 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                        }
                        else
                        {
                          *(_QWORD *)(v19 + v3 + 8) = Start & 0xFFFFFFFFFFFFF000uLL;
                          v21 = (v18 >> 12) + ((v18 & 0xFFF) != 0);
                        }
                        *(_QWORD *)(v19 + v3 + 16) = v21;
                        ++v14;
                        *(_BYTE *)(v19 + v3 + 24) = 0;
                        *(_QWORD *)(v19 + v3) = v3 + 32LL * v14;
                      }
                      v15 = (unsigned int)(v15 + 1);
                    }
                    while ( (unsigned int)v15 < v16[1] );
                    v7 = v24;
                  }
                  v13 = (unsigned int)(v13 + 1);
                }
                while ( (unsigned int)v13 < *v7 );
                v5 = v25;
              }
              v8 = (char *)(32LL * (unsigned int)(v4 - 1));
              *(_QWORD *)&v8[v3] = 0LL;
            }
          }
          HalpMmAllocCtxFree((__int64)v8, (__int64)v7);
        }
      }
      if ( v5 )
        ObfDereferenceObjectWithTag(v5, 0x746C6644u);
    }
    guard_dispatch_icall_no_overrides(v27);
  }
  return v3;
}
