/*
 * XREFs of PopPepUpdateConstraints @ 0x1403128A0
 * Callers:
 *     PopPepDeviceDState @ 0x1403137A0 (PopPepDeviceDState.c)
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x140377360 (PopRequestPowerIrp.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140378130 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     PopPepCancelActivityRange @ 0x140311350 (PopPepCancelActivityRange.c)
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140316D20 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1403170D0 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140319150 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x140319590 (PopPepPromoteActivities.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PopPepUpdateConstraints(_DWORD *a1, int a2, char a3)
{
  __int64 v3; // r13
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // di
  unsigned int v10; // ebp
  _DWORD *v11; // rcx
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  NTSTATUS result; // eax
  unsigned int i; // edi
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+70h] [rbp+8h]

  v3 = a2;
  v6 = PopPepLockActivityLink(a1, 0LL, 4LL);
  v8 = (unsigned int)a1[45];
  v9 = v6;
  v10 = a1[30];
  v23 = v6;
  if ( (_DWORD)v8 )
  {
    v11 = a1 + 74;
    do
    {
      v10 += *v11;
      v11 += 52;
      --v8;
    }
    while ( v8 );
    v12 = 0;
    do
    {
      v13 = &a1[52 * v12 + 48];
      if ( (v13[4] & 1) != 0 )
      {
        if ( a3 )
        {
          v13[v3 + 38] = v13[47] - 1;
        }
        else
        {
          PopPepCancelActivityRange((__int64)(v13 + 14), 1, 1, 1, v13 + 26);
          v13[v3 + 38] = 0;
          KeResetEvent((PRKEVENT)(v13 + 8));
        }
        LOBYTE(v7) = a3;
        PopPepUpdateIdleState(a1, &a1[52 * v12 + 48], v7);
        if ( !a3 )
        {
          v22 = *((_QWORD *)v13 + 8);
          if ( *(_DWORD *)v22 )
            *(_BYTE *)(v22 + 16) = 1;
          else
            KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
        }
      }
      ++v12;
    }
    while ( v12 < a1[45] );
    v9 = v23;
  }
  PopPepPromoteActivities(a1, 0LL, 3LL);
  v14 = (unsigned int)a1[45];
  v15 = (unsigned int)a1[30];
  if ( (_DWORD)v14 )
  {
    v16 = a1 + 74;
    do
    {
      v15 = (unsigned int)(*v16 + v15);
      v16 += 52;
      --v14;
    }
    while ( v14 );
  }
  PopPepRequestWork(a1, v10, v15);
  LOBYTE(v17) = 0;
  LOBYTE(v18) = v9;
  result = PopPepReleaseActivityLink(a1, 0LL, v18, v17);
  if ( !a3 )
  {
    for ( i = 0; i < a1[45]; ++i )
    {
      result = i;
      v21 = 52LL * i;
      if ( (a1[v21 + 52] & 1) != 0 )
        result = KeWaitForSingleObject(&a1[v21 + 56], Executive, 0, 0, 0LL);
    }
  }
  return result;
}
