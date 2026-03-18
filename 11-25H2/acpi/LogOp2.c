/*
 * XREFs of LogOp2 @ 0x1400077A0
 * Callers:
 *     <none>
 * Callees:
 *     LogOp2_32 @ 0x140007938 (LogOp2_32.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogOp2(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  bool v7; // si
  int v8; // ebp
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0;
  if ( !ghGetAcpiTableVersion )
    return LogOp2_32(a1, a2);
  ghGetAcpiTableVersion(1413763908LL, &v17);
  if ( v17 < 2 )
    return LogOp2_32(a1, a2);
  v6 = a2[10];
  if ( *(_WORD *)(v6 + 2) != 1 || *(_WORD *)(v6 + 42) != 1 )
    return LogOp2_32(a1, a2);
  LOBYTE(v4) = 1;
  v7 = 0;
  v8 = ValidateArgTypes(a1, v6, v4, "II");
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a2[7] + 8LL);
    if ( v9 == 147 )
    {
      v7 = *(_QWORD *)(a2[10] + 16LL) == *(_QWORD *)(a2[10] + 56LL);
    }
    else
    {
      v12 = v9 - 144;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 3;
          if ( v14 )
          {
            if ( v14 == 1 )
              v7 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
          }
          else
          {
            v7 = *(_QWORD *)(a2[10] + 16LL) > *(_QWORD *)(a2[10] + 56LL);
          }
        }
        else
        {
          v16 = a2[10];
          if ( !*(_QWORD *)(v16 + 16) && !*(_QWORD *)(v16 + 56) )
          {
            *(_WORD *)(a2[11] + 2LL) = 1;
            goto LABEL_10;
          }
          v7 = 1;
        }
      }
      else
      {
        v15 = a2[10];
        if ( *(_QWORD *)(v15 + 16) && *(_QWORD *)(v15 + 56) )
        {
          v10 = 1LL;
          *(_WORD *)(a2[11] + 2LL) = 1;
          goto LABEL_21;
        }
      }
    }
    v10 = 1LL;
    *(_WORD *)(a2[11] + 2LL) = 1;
    if ( !v7 )
    {
LABEL_10:
      v11 = 0LL;
LABEL_11:
      *(_QWORD *)(a2[11] + 16LL) = v11;
      return (unsigned int)v8;
    }
LABEL_21:
    v17 = 0;
    if ( ghGetAcpiTableVersion )
    {
      ghGetAcpiTableVersion(1413763908LL, &v17);
      if ( v17 >= 2 )
        v10 = 0LL;
    }
    v11 = (v10 << 32) - 1;
    goto LABEL_11;
  }
  return (unsigned int)v8;
}
