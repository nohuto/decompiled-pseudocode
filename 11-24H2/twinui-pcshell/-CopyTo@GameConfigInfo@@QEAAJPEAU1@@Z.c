/*
 * XREFs of ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x1801C9828
 * Callers:
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803180CC (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameConfigInfo::CopyTo(GameConfigInfo *this, struct GameConfigInfo *a2)
{
  char v2; // al
  HRESULT v4; // edi
  HSTRING v5; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)this;
  newString = 0LL;
  *(_BYTE *)a2 = v2;
  *((_BYTE *)a2 + 1) = *((_BYTE *)this + 1);
  *((_BYTE *)a2 + 2) = *((_BYTE *)this + 2);
  *((_BYTE *)a2 + 3) = *((_BYTE *)this + 3);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 4);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 2);
  *((_BYTE *)a2 + 5) = *((_BYTE *)this + 5);
  *((_BYTE *)a2 + 6) = *((_BYTE *)this + 6);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  v4 = WindowsDuplicateString(*((HSTRING *)this + 4), &newString);
  if ( v4 >= 0 )
  {
    v5 = (HSTRING)*((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = newString;
    WindowsDeleteString(v5);
  }
  return (unsigned int)v4;
}
