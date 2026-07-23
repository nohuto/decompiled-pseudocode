/*
 * XREFs of PopPepUpdateConstraints @ 0x1403A750C
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1402E680C (PopFxCompleteDevicePowerRequired.c)
 *     PopRequestCompletion @ 0x1403A6460 (PopRequestCompletion.c)
 *     PopPepDeviceDState @ 0x1403A6948 (PopPepDeviceDState.c)
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PopPepUpdateIdleState @ 0x1402BF8D0 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopPepCancelActivityRange @ 0x1403A6190 (PopPepCancelActivityRange.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v3; // r13
  char v6; // al
  __int64 v7; // rdx
  char v8; // di
  unsigned int v9; // ebp
  _DWORD *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  unsigned int i; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // [rsp+70h] [rbp+8h]
  KIRQL v20; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v20 = 0;
  v6 = PopPepLockActivityLink(a1, 0LL, 4LL, 1LL, &v20);
  v7 = *(unsigned int *)(a1 + 180);
  v8 = v6;
  v9 = *(_DWORD *)(a1 + 120);
  v19 = v6;
  if ( (_DWORD)v7 )
  {
    v10 = (_DWORD *)(a1 + 296);
    do
    {
      v9 += *v10;
      v10 += 52;
      --v7;
    }
    while ( v7 );
    v11 = 0;
    do
    {
      v12 = a1 + 208LL * v11 + 192;
      if ( (*(_BYTE *)(v12 + 16) & 1) != 0 )
      {
        if ( a3 )
        {
          *(_DWORD *)(v12 + 4 * v3 + 152) = *(_DWORD *)(v12 + 188) - 1;
        }
        else
        {
          PopPepCancelActivityRange(v12 + 56, 1, 1, 1, (volatile signed __int32 *)(v12 + 104));
          *(_DWORD *)(v12 + 4 * v3 + 152) = 0;
          KeResetEvent((PRKEVENT)(v12 + 32));
        }
        PopPepUpdateIdleState(a1, a1 + 208LL * v11 + 192, a3);
        if ( !a3 )
        {
          v18 = *(_QWORD *)(v12 + 64);
          if ( *(_DWORD *)v18 )
            *(_BYTE *)(v18 + 16) = 1;
          else
            KeSetEvent((PRKEVENT)(v12 + 32), 0, 0);
        }
      }
      ++v11;
    }
    while ( v11 < *(_DWORD *)(a1 + 180) );
    v8 = v19;
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  v13 = *(unsigned int *)(a1 + 180);
  v14 = *(_DWORD *)(a1 + 120);
  if ( (_DWORD)v13 )
  {
    v15 = (_DWORD *)(a1 + 296);
    do
    {
      v14 += *v15;
      v15 += 52;
      --v13;
    }
    while ( v13 );
  }
  PopPepRequestWork(a1, v9, v14);
  PopPepReleaseActivityLink(a1, 0LL, v8, v20);
  if ( !a3 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v17 = 208LL * i;
      if ( (*(_BYTE *)(v17 + a1 + 208) & 1) != 0 )
        KeWaitForSingleObject((PVOID)(a1 + v17 + 224), Executive, 0, 0, 0LL);
    }
  }
}
