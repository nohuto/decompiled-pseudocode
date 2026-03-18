/*
 * XREFs of ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x14002F690
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14005CA4C (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1401FFCDC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall DxgkCompositionObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID Object)
{
  _QWORD *v5; // rsi
  struct _OBJECT_TYPE *v8; // r8
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  PVOID v11; // rdi

  v5 = Object;
  Object = 0LL;
  v8 = g_pDxgkCompositionObjectType;
  *v5 = 0LL;
  result = ObReferenceObjectByHandle(a1, a2, v8, a3, &Object, 0LL);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == a4 )
    {
      *v5 = v11;
      return v10;
    }
    else
    {
      ObfDereferenceObject(v11);
      return -1073741788;
    }
  }
  return result;
}
