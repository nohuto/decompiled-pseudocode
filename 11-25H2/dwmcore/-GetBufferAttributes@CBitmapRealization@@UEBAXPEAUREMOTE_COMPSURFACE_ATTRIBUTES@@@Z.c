/*
 * XREFs of ?GetBufferAttributes@CBitmapRealization@@UEBAXPEAUREMOTE_COMPSURFACE_ATTRIBUTES@@@Z @ 0x1802E3F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::GetBufferAttributes(
        CBitmapRealization *this,
        struct REMOTE_COMPSURFACE_ATTRIBUTES *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 16);
  *(_OWORD *)((char *)a2 + 8) = *(_OWORD *)((char *)this + 36);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 8);
  *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)((char *)this + 68);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 21);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 88);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 13);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 28);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 29);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 30);
  *((_DWORD *)a2 + 21) = *((_DWORD *)this + 31);
}
