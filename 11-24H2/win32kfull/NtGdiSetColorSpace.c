/*
 * XREFs of NtGdiSetColorSpace @ 0x14033C420
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1400C14F4 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-88h]
  _QWORD v7[15]; // [rsp+50h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v5, a2);
      if ( v6 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v7[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v7[0] + 96LL) = v6;
        INC_SHARE_REF_CNT(v6);
        v3 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}
