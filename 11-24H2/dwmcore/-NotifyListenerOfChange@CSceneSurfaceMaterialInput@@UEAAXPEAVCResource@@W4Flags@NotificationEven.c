/*
 * XREFs of ?NotifyListenerOfChange@CSceneSurfaceMaterialInput@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EA600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSceneSurfaceMaterialInput::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3)
{
  void (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // rax

  v3 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 80LL);
  if ( (char *)v3 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(a2, a3, a1);
  }
  else if ( (char *)v3 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, a3, a1);
  }
  else
  {
    v3(a2, a3, a1);
  }
}
