/*
 * XREFs of ?Update@MPCGamepadInputHelper@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180011128
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCGamepadInputHelper::Update(MPCGamepadInputHelper *this, struct LegacyInputInfo *a2)
{
  __int64 v2; // rax
  char v3; // r8
  char v4; // r9

  v2 = *((_QWORD *)a2 + 35);
  if ( v2 != *((_QWORD *)this + 1) && v2 != *((_QWORD *)this + 2) )
  {
    *((_BYTE *)this + 39) = 0;
LABEL_9:
    v3 = 0;
    goto LABEL_10;
  }
  v3 = 1;
  if ( !*((_BYTE *)a2 + 240) || (v4 = 1, *((_BYTE *)a2 + 242)) )
    v4 = 0;
  *((_BYTE *)this + 39) = v4;
  if ( !v4 || *((_DWORD *)a2 + 68) )
    goto LABEL_9;
LABEL_10:
  *((_BYTE *)this + 40) = v3;
  *((_BYTE *)this + 41) = *((_BYTE *)a2 + 312) != 0;
  MPCGamepadInputHelper::UpdateGamepadFocus(this);
}
