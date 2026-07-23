/*
 * XREFs of HalpInterruptRemapFixedLines @ 0x14053FEA0
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14053FA00 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403746F4 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B4E878 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 HalpInterruptRemapFixedLines()
{
  unsigned int v0; // edi
  ULONG_PTR *v1; // r14
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rbp
  int v7; // r12d
  __int64 v8; // rdx
  __int64 i; // r13
  __int64 v10; // rdi
  bool v11; // zf
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned __int8 v15; // bl
  int v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  int v19; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+10h]
  __int64 v21; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v0 = 0;
  v19 = 0;
  v21 = 0LL;
  if ( HalpInterruptFixedLines && ((*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 || qword_140FC1148) )
  {
    v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v2 = 0;
    v20 = 0;
    while ( v1 != &HalpRegisteredInterruptControllers )
    {
      v3 = (__int64)v1;
      v1 = (ULONG_PTR *)*v1;
      if ( *(_DWORD *)(v3 + 240) == 2 )
      {
        v4 = (_QWORD *)(v3 + 264);
        v5 = *(_QWORD **)(v3 + 264);
LABEL_8:
        while ( v5 != v4 )
        {
          v6 = v5;
          v5 = (_QWORD *)*v5;
          if ( *((_DWORD *)v6 + 8) == 2 )
          {
            v7 = 0;
            v8 = 0LL;
            for ( i = 0LL; ; i += 16LL )
            {
              v18 = v8;
              if ( v7 >= *((_DWORD *)v6 + 6) - *((_DWORD *)v6 + 5) )
              {
                v4 = (_QWORD *)(v3 + 264);
                goto LABEL_8;
              }
              if ( *(_BYTE *)(v6[6] + i) )
              {
                LODWORD(v21) = *(_DWORD *)(v3 + 256);
                HIDWORD(v21) = v7 + *((_DWORD *)v6 + 5);
                v10 = v8 + v6[5];
                v11 = (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0;
                v22 = v10;
                if ( !v11 )
                {
                  LOBYTE(v17) = 0;
                  v12 = HalpIrtAllocateIndex(&v19, 1LL, 0LL, 0LL, 0LL, v17, 0LL);
                  v0 = v12;
                  if ( v12 < 0 )
                  {
                    HalpInterruptSetProblemEx(
                      v3,
                      31,
                      v12,
                      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                      0x77Eu);
                    return v0;
                  }
                  v10 = v22;
                  v20 = v19 & 0x3FFFFFFF | v2 & 0xC0000000;
                  v13 = v19 & 0x3FFFFFFF;
                  HalpIommuUpdateRemappingTableEntry(0, v19 & 0x3FFFFFFF);
                  *(_DWORD *)(v10 + 24) = 7;
                  *(_DWORD *)(v10 + 32) = v13;
                }
                if ( qword_140FC1148 )
                {
                  v14 = HalpHvMapIoApicDeviceInterrupt(*(unsigned int *)(v3 + 256), v10, 0LL);
                  v0 = v14;
                  if ( v14 < 0 )
                  {
                    HalpInterruptSetProblemEx(
                      v3,
                      31,
                      v14,
                      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                      0x79Au);
                    return v0;
                  }
                }
                v15 = HalpAcquireHighLevelLock(&HalpInterruptLock);
                v0 = HalpInterruptSetLineStateInternal(v3, (__int64)&v21, v22);
                HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v15);
                if ( (v0 & 0x80000000) != 0 )
                  return v0;
                v8 = v18;
                v2 = v20;
              }
              ++v7;
              v8 += 56LL;
            }
          }
        }
      }
    }
  }
  return v0;
}
