/*
 * XREFs of DxgkEngGetDC @ 0x1C0159990
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C000741C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

HDC __fastcall DxgkEngGetDC(__int64 a1, _QWORD *a2)
{
  HDC DC; // rax
  HDC v4; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rbp
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = (HDC)NtUserGetDC();
  v4 = DC;
  if ( !DC )
    return 0LL;
  if ( a2 )
  {
    MDCOBJA::MDCOBJA((MDCOBJA *)&v8, DC);
    v6 = v8;
    if ( v8 )
    {
      *a2 = GreCreateDisplayDC(v8[6], 0LL);
      v9 = 0;
      v7 = *v6;
      HmgDecrementShareReferenceCountEx(v6, &v9);
      if ( v9 )
        GrepDeleteDC(v7, 0x2000000LL);
    }
    if ( !*a2 )
    {
      UserReleaseDC(v4);
      return 0LL;
    }
  }
  return v4;
}
