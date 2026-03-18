/*
 * XREFs of ?Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180190600
 * Callers:
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180190554 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDevice::Unmap(CD3DDevice *this, struct ID3D11Resource *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD))(**((_QWORD **)this + 70) + 120LL))(
    *((_QWORD *)this + 70),
    a2,
    0LL);
}
