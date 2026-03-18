/*
 * XREFs of NtValidateCompositionSurfaceHandle @ 0x140047270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtValidateCompositionSurfaceHandle(void *a1, void *a2)
{
  _QWORD *v3; // rdi
  NTSTATUS v4; // ebx
  _QWORD *v5; // rsi
  __int64 Src; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  v3 = 0LL;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v5 = Object;
  if ( v4 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      v3 = v5;
    }
    else
    {
      ObfDereferenceObject(v5);
      v4 = -1073741788;
    }
  }
  if ( v4 >= 0 )
  {
    Src = v3[3];
    ObfDereferenceObject(v3);
  }
  if ( a2 )
    RtlCopyToUser(a2, &Src, 8uLL);
  else
    return (unsigned int)-1073741811;
  return (unsigned int)v4;
}
