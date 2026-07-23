/*
 * XREFs of PoCreateThermalRequest @ 0x14074A0D0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     PopAssociateThermalRequest @ 0x14074A358 (PopAssociateThermalRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, int a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  int v9; // edi
  __int64 Pool2; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  *a1 = 0LL;
  if ( a2 && a3 && a4 )
  {
    v9 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, (PVOID *)&v15);
    if ( v9 >= 0 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 0x240uLL, 0x6C6F4350u);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v11 = a5;
        v12 = Pool2;
        *(_QWORD *)(Pool2 + 24) = v15;
        *(_BYTE *)(Pool2 + 16) = 100;
        v13 = MEMORY[0xFFFFF78000000008];
        v6[6] = MEMORY[0xFFFFF78000000008];
        v6[7] = v13;
        v9 = PopAssociateThermalRequest(v12, a2, v11 >= 0);
        if ( v9 >= 0 )
        {
          *a1 = v6;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    v7 = v15;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v7 )
    PoDestroyReasonContext(v7);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6C6F4350u);
  return (unsigned int)v9;
}
