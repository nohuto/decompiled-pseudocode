/*
 * XREFs of _anonymous_namespace_::IsTestDevice @ 0x1801EE274
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024AADC (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsTestDevice()
{
  int v0; // ebx
  LSTATUS ValueW; // eax
  int v2; // ecx
  bool v3; // sf
  bool v5; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 4;
  v0 = 0;
  v7 = 0;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\SQMClient", L"IsTest", 0x10000012u, &v7, &v6, &v8);
  v2 = ValueW;
  if ( !ValueW )
  {
    if ( v7 == 4 )
    {
      if ( v6 > 1 )
        goto LABEL_4;
      v2 = 0;
      v5 = v6 == 1;
    }
    else
    {
      if ( v8 != 4 || (unsigned __int16)(v6 - 48) > 1u )
        goto LABEL_4;
      v2 = 0;
      v5 = (_WORD)v6 == 49;
    }
    LOBYTE(v0) = v5;
LABEL_3:
    v3 = v2 < 0;
    if ( v2 <= 0 )
      return !v3 && v0 != 0;
    goto LABEL_4;
  }
  if ( ValueW != 234 )
    goto LABEL_3;
LABEL_4:
  v3 = 1;
  return !v3 && v0 != 0;
}
