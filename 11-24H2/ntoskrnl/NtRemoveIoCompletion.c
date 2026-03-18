/*
 * XREFs of NtRemoveIoCompletion @ 0x14098B370
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtRemoveIoCompletion(HANDLE Handle, _QWORD *a2, _QWORD *a3, _OWORD *a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  LARGE_INTEGER *v13; // rbx
  NTSTATUS result; // eax
  int v15; // esi
  ULONG v16; // [rsp+44h] [rbp-64h] BYREF
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v20; // [rsp+60h] [rbp-48h] BYREF
  __int128 v21; // [rsp+70h] [rbp-38h]
  PLIST_ENTRY v22; // [rsp+88h] [rbp-20h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a3;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a2;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a4;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( a5 )
    {
      v17 = (LARGE_INTEGER *)&v18;
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      v18 = *(_QWORD *)v9;
    }
    v13 = v17;
  }
  else
  {
    v13 = v17;
    if ( a5 )
      v13 = (LARGE_INTEGER *)a5;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)&v20, &v22, 1u, &v16, PreviousMode, v13, 0);
    ObfDereferenceObject(Object);
    if ( !v15 )
    {
      *a2 = v20;
      *a3 = *((_QWORD *)&v20 + 1);
      *a4 = v21;
    }
    return v15;
  }
  return result;
}
