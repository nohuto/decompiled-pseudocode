/*
 * XREFs of ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x140048300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkReferenceCompositionObject(void *a1, ACCESS_MASK a2, int a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  NTSTATUS v6; // eax
  PVOID v7; // rdi
  unsigned int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, a4, &Object, 0LL);
  v7 = Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == a3 )
    {
      *a5 = v7;
    }
    else
    {
      ObfDereferenceObject(v7);
      return (unsigned int)-1073741788;
    }
  }
  return v8;
}
