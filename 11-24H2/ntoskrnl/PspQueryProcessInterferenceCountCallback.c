/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x140777AA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(__int64 Object, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  unsigned int *v9; // [rsp+38h] [rbp-8h]
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0;
  v10 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  v4 = *(_DWORD *)(Object + 496);
  v7 = 0LL;
  if ( (v4 & 1) != 0 || !ObReferenceObjectSafeWithTag(Object, 0x624A7350u) )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Object + 488)) )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 576LL);
      if ( v10 <= 0xFFFFFFFD )
      {
        v8 = Object;
        v9 = &v11;
        v5 = PsInvokeWin32Callout(24LL, &v7, 1LL, &v10);
        if ( v5 >= 0 )
          **(_QWORD **)a2 += v11;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 488));
    }
    ObfDereferenceObjectWithTag((PVOID)Object, 0x624A7350u);
  }
  return (unsigned int)v5;
}
