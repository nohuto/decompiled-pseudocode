/*
 * XREFs of _GetDeviceRects @ 0x140143A60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( v3 )
  {
    v8 = HMValidateHandleNoSecure(v3, 19);
    if ( v8 )
    {
      v4 = 1;
      *a2 = *(_OWORD *)(*(_QWORD *)(v8 + 456) + 160LL);
      *a3 = *(_OWORD *)(*(_QWORD *)(v8 + 456) + 176LL);
    }
  }
  return v4;
}
