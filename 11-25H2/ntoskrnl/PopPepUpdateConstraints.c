/*
 * XREFs of PopPepUpdateConstraints @ 0x140357F10
 * Callers:
 *     PopPepDeviceDState @ 0x140357170 (PopPepDeviceDState.c)
 *     PopRequestCompletion @ 0x1403580F0 (PopRequestCompletion.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     PopRequestPowerIrp @ 0x140359B00 (PopRequestPowerIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopPepReleaseActivityLink @ 0x1402BE970 (PopPepReleaseActivityLink.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopPepPromoteActivities @ 0x1402BEEB0 (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x1402C0D24 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopPepCancelActivityRange @ 0x14043B300 (PopPepCancelActivityRange.c)
 */

void __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r13
  KIRQL v6; // al
  unsigned int v7; // r9d
  KIRQL v8; // di
  unsigned int v9; // ebp
  _DWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  _DWORD *v16; // rax
  unsigned int i; // edi
  __int64 v18; // rcx
  __int64 v19; // rax
  KIRQL v20; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 180);
  v8 = v6;
  v9 = *(_DWORD *)(a1 + 120);
  v20 = v6;
  *(_BYTE *)(a1 + 125) = 1;
  if ( v7 )
  {
    v10 = (_DWORD *)(a1 + 296);
    v11 = v7;
    do
    {
      v9 += *v10;
      v10 += 52;
      --v11;
    }
    while ( v11 );
    v12 = 0;
    do
    {
      v13 = a1 + 208LL * v12 + 192;
      if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
      {
        if ( a3 )
        {
          *(_DWORD *)(v13 + 4 * v4 + 152) = *(_DWORD *)(v13 + 188) - 1;
        }
        else
        {
          PopPepCancelActivityRange(v13 + 56, 1, 1, 1, v13 + 104);
          *(_DWORD *)(v13 + 4 * v4 + 152) = 0;
          KeResetEvent((PRKEVENT)(v13 + 32));
        }
        PopPepUpdateIdleState(a1, a1 + 208LL * v12 + 192, a3);
        if ( !a3 )
        {
          v19 = *(_QWORD *)(v13 + 64);
          if ( *(_DWORD *)v19 )
            *(_BYTE *)(v19 + 16) = 1;
          else
            KeSetEvent((PRKEVENT)(v13 + 32), 0, 0);
        }
      }
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 180) );
    v8 = v20;
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  v14 = *(unsigned int *)(a1 + 180);
  v15 = *(_DWORD *)(a1 + 120);
  if ( (_DWORD)v14 )
  {
    v16 = (_DWORD *)(a1 + 296);
    do
    {
      v15 += *v16;
      v16 += 52;
      --v14;
    }
    while ( v14 );
  }
  PopPepRequestWork(a1, v9, v15);
  PopPepReleaseActivityLink(a1, 0LL, 1, v8);
  if ( !a3 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v18 = 208LL * i;
      if ( (*(_BYTE *)(v18 + a1 + 208) & 1) != 0 )
        KeWaitForSingleObject((PVOID)(a1 + v18 + 224), Executive, 0, 0, 0LL);
    }
  }
}
