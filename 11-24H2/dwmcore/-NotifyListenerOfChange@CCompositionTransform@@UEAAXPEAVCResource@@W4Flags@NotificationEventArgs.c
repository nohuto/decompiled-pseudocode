/*
 * XREFs of ?NotifyListenerOfChange@CCompositionTransform@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EDF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionTransform::NotifyListenerOfChange(__int64 a1, _DWORD *a2)
{
  void (__fastcall *v2)(_DWORD *, __int64, __int64); // rax

  v2 = *(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a2 + 80LL);
  if ( (char *)v2 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(a2, 2LL, a1);
  }
  else if ( (char *)v2 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, 2u, a1);
  }
  else
  {
    v2(a2, 2LL, a1);
  }
}
