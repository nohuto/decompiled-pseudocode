/*
 * XREFs of ?SetHandleProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x140135E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetHandleProperty(
        DirectComposition::CWindowNodeMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // ebx
  bool *v5; // rsi
  void *v7; // rcx
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = a4;
  if ( a2 != 57 )
    return (unsigned int)-1073741811;
  v7 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    v4 = DxgkReferenceCompositionObject(a3, 1LL, 1LL, a4, &v10);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v7 = v10;
  }
  v8 = (void *)*((_QWORD *)this + 56);
  if ( v8 == v7 )
  {
    if ( v7 )
      DxgkReleaseCompositionObjectReference(v7);
  }
  else
  {
    if ( v8 )
    {
      DxgkReleaseCompositionObjectReference(*((void **)this + 56));
      v7 = v10;
    }
    *((_DWORD *)this + 92) |= 0x20u;
    *((_QWORD *)this + 56) = v7;
    *v5 = 1;
  }
  return (unsigned int)v4;
}
