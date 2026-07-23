/*
 * XREFs of WheapWmiExecutePolicyManagementMethod @ 0x14065DE1C
 * Callers:
 *     WheapWmiExecuteMethod @ 0x14065DB18 (WheapWmiExecuteMethod.c)
 * Callees:
 *     WheaWritePolicyValueToRegistry @ 0x1407C912C (WheaWritePolicyValueToRegistry.c)
 *     WheapGetAllPolicyBufferSize @ 0x1407C918C (WheapGetAllPolicyBufferSize.c)
 *     WheapGetAllPolicyValues @ 0x1407C919C (WheapGetAllPolicyValues.c)
 *     WheapGetPolicyValue @ 0x1407C91E0 (WheapGetPolicyValue.c)
 *     WheapResetPolicyDefaults @ 0x1407C9210 (WheapResetPolicyDefaults.c)
 */

__int64 __fastcall WheapWmiExecutePolicyManagementMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v6; // edi
  unsigned int AllPolicyValues; // r11d
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int PolicyValue; // eax
  unsigned int v15; // eax
  unsigned int AllPolicyBufferSize; // eax
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v20[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+40h] [rbp+8h] BYREF

  v21 = 0;
  v6 = 0;
  v20[0] = 0;
  AllPolicyValues = 0;
  v8 = a1 - 1;
  if ( !v8 )
  {
    AllPolicyBufferSize = WheapGetAllPolicyBufferSize();
    v6 = AllPolicyBufferSize + 12;
    if ( v18 < AllPolicyBufferSize + 12 )
      goto LABEL_21;
    *a3 = v17;
    a3[2] = AllPolicyBufferSize;
    AllPolicyValues = WheapGetAllPolicyValues(v20, AllPolicyBufferSize, a3 + 3);
    v15 = v20[0];
    goto LABEL_23;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a4 < 4 )
      goto LABEL_16;
    v6 = 8;
    if ( a2 < 8 )
      goto LABEL_21;
    PolicyValue = WheapGetPolicyValue(*a3, &v21);
    *a3 = PolicyValue;
    AllPolicyValues = PolicyValue;
    if ( PolicyValue )
      goto LABEL_24;
    v15 = v21;
LABEL_23:
    a3[1] = v15;
    goto LABEL_24;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a4 >= 8 )
    {
      v6 = 4;
      v13 = *a3;
      v21 = a3[1];
      if ( a2 >= 4 )
      {
        v12 = WheaWritePolicyValueToRegistry(v13, &v21);
        goto LABEL_14;
      }
LABEL_21:
      AllPolicyValues = -1073741789;
      goto LABEL_24;
    }
LABEL_16:
    AllPolicyValues = -1073741811;
    goto LABEL_24;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      *a3 = 0;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v11 == 1 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v12 = WheapResetPolicyDefaults();
LABEL_14:
      AllPolicyValues = v12;
      *a3 = v12;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  AllPolicyValues = -1073741161;
LABEL_24:
  *a5 = v6;
  return AllPolicyValues;
}
