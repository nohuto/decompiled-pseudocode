/*
 * XREFs of ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1800CB170
 * Callers:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800CAEB0 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x18044CD58 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LightweightPropertySet::LightweightProperty::IsName(HSTRING *this, const unsigned __int16 *a2)
{
  PCWSTR StringRawBuffer; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(*this, 0LL);
  return CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2;
}
