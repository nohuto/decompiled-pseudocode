/*
 * XREFs of CarAddUniqueViolation @ 0x14061763C
 * Callers:
 *     CarHandleEtwEvent @ 0x14061456C (CarHandleEtwEvent.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14060FF1C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x1406175BC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x140617894 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x140617B8C (CarReleaseDbLockFromDpcLevel.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarAddUniqueViolation(
        int a1,
        int a2,
        char a3,
        __int64 a4,
        _BYTE *Src,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  unsigned int v9; // edi
  _BYTE *v10; // r15
  _DWORD *v12; // r14
  __int64 v13; // r13
  _DWORD *inserted; // rax
  BOOLEAN v15; // cl
  _DWORD *v16; // rbx
  bool v17; // zf
  __int64 Pool2; // rax
  __int64 v19; // r14
  void *v20; // rax
  void *v21; // r12
  void *v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  _DWORD Buffer[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  int v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+44h] [rbp-Ch]
  int v28; // [rsp+4Ch] [rbp-4h]
  BOOLEAN NewElement; // [rsp+A8h] [rbp+58h] BYREF

  NewElement = 0;
  v9 = 0;
  if ( !a4 || a4 == -4 )
    return 3221225485LL;
  v10 = Src;
  if ( !Src )
    return 3221225711LL;
  v12 = a8;
  if ( !a8 )
    return 3221225712LL;
  v13 = a6;
  v25 = a6;
  v27 = 0LL;
  v28 = 0;
  Buffer[0] = a1;
  Buffer[1] = a2;
  v26 = a7;
  if ( !CarDb )
    return 3221225659LL;
  v23 = 0LL;
  BYTE9(v23) = 4;
  ViPtRaiseIrqlSafe((__int64)&v23);
  CarAcquireDbLockAtDpcLevelSafe((__int64)&v23);
  if ( CarDbInitialized )
  {
    if ( CarDb->NumberGenericTableElements < 0xF4240 )
    {
      inserted = RtlInsertElementGenericTableAvl(CarDb, Buffer, 0x20u, &NewElement);
      v15 = NewElement;
      v16 = inserted;
      if ( inserted )
        ++inserted[5];
      v17 = CarLogInitialized == 0;
      *v12 = inserted[5];
      if ( v17 && v15 )
      {
        Pool2 = ExAllocatePool2(0x40uLL, 0x68uLL, 0x4E726143u);
        *((_QWORD *)v16 + 3) = Pool2;
        if ( Pool2 )
        {
          v19 = -1LL;
          *(_OWORD *)(Pool2 + 2) = *(_OWORD *)(a4 + 4);
          *(_OWORD *)(Pool2 + 18) = *(_OWORD *)(a4 + 20);
          *(_OWORD *)(Pool2 + 34) = *(_OWORD *)(a4 + 36);
          *(_OWORD *)(Pool2 + 50) = *(_OWORD *)(a4 + 52);
          do
            ++v19;
          while ( v10[v19] );
          v20 = (void *)ExAllocatePool2(0x40uLL, (unsigned int)(v19 + 1), 0x4E726143u);
          v21 = v20;
          if ( v20 )
          {
            memmove(v20, v10, (unsigned int)v19);
            *(_QWORD *)(*((_QWORD *)v16 + 3) + 72LL) = v21;
            **((_BYTE **)v16 + 3) = a3;
            *(_DWORD *)(*((_QWORD *)v16 + 3) + 80LL) = a2;
            *(_QWORD *)(*((_QWORD *)v16 + 3) + 88LL) = v13;
            *(_DWORD *)(*((_QWORD *)v16 + 3) + 96LL) = *(_DWORD *)(a4 + 1124);
            ++CarDb[1].WhichOrderedElement;
          }
          else
          {
            v22 = (void *)*((_QWORD *)v16 + 3);
            v9 = -1073741801;
            if ( v22 )
            {
              ExFreePoolWithTag(v22, 0);
              *((_QWORD *)v16 + 3) = 0LL;
            }
          }
        }
        else
        {
          v9 = -1073741801;
        }
      }
    }
    else
    {
      v9 = -1073741298;
    }
  }
  CarReleaseDbLockFromDpcLevel(&v23);
  CarCleanDbLockContext(&v23);
  return v9;
}
