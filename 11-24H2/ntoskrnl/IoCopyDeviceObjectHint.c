/*
 * XREFs of IoCopyDeviceObjectHint @ 0x1407118A0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 */

__int64 __fastcall IoCopyDeviceObjectHint(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int SetSpecificExtension; // r8d
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 208);
  SetSpecificExtension = 0;
  if ( v2 )
  {
    v7 = *(_QWORD **)(v2 + 16);
    if ( v7 )
      return 3221225473LL;
  }
  else
  {
    v7 = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 208);
  if ( v5 )
  {
    v6 = *(_QWORD **)(v5 + 16);
    if ( v6 )
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a2, 1, 0x20u, 1, &v7, 0LL);
      if ( !SetSpecificExtension )
        *v7 = *v6;
    }
  }
  return SetSpecificExtension;
}
