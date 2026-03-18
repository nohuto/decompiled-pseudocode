/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x140274B90
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 */

__int64 __fastcall EditionIsUsermodeRIMAccessAllowed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6, a2, a3);
  v4 = IsCurrentProcessDwm(v3);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  return v4;
}
