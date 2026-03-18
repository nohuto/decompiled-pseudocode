/*
 * XREFs of NtCreateProcessStateChange @ 0x1407660A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateProcessStateChange(HANDLE *a1, __int64 a2, int a3, ULONG_PTR a4, int a5)
{
  char PreviousMode; // r14
  __int64 v8; // rcx
  int inserted; // edi
  int v10; // ecx
  int v11; // r9d
  _QWORD *v12; // rcx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16; // [rsp+68h] [rbp-20h]

  Object = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  if ( a5 )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(a4, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      LOBYTE(v11) = PreviousMode;
      LOBYTE(v10) = PreviousMode;
      inserted = ObCreateObjectEx(v10, PspProcessStateChangeType, a3, v11);
      if ( inserted >= 0 )
      {
        v12 = v16;
        *(_OWORD *)v16 = 0LL;
        v12[2] = 0LL;
        v12[1] = 0LL;
        *v12 = Object;
        *((_DWORD *)v12 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&Handle);
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)inserted;
}
