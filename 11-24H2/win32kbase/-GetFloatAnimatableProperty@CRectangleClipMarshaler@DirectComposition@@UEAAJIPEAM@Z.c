/*
 * XREFs of ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140231BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  if ( (unsigned int)a2 > 0xB )
  {
    switch ( (_DWORD)a2 )
    {
      case 0xC:
        v4 = *((_DWORD *)this + 31);
        goto LABEL_27;
      case 0xD:
        v4 = *((_DWORD *)this + 32);
        goto LABEL_27;
      case 0xE:
        v4 = *((_DWORD *)this + 33);
        goto LABEL_27;
      case 0xF:
        v4 = *((_DWORD *)this + 34);
        goto LABEL_27;
      case 0x10:
        v4 = *((_DWORD *)this + 35);
        goto LABEL_27;
    }
  }
  else
  {
    switch ( (_DWORD)a2 )
    {
      case 0xB:
        v4 = *((_DWORD *)this + 30);
        goto LABEL_27;
      case 5:
        v4 = *((_DWORD *)this + 24);
        goto LABEL_27;
      case 6:
        v4 = *((_DWORD *)this + 25);
        goto LABEL_27;
      case 7:
        v4 = *((_DWORD *)this + 26);
        goto LABEL_27;
      case 8:
        v4 = *((_DWORD *)this + 27);
        goto LABEL_27;
      case 9:
        v4 = *((_DWORD *)this + 28);
        goto LABEL_27;
      case 0xA:
        v4 = *((_DWORD *)this + 29);
LABEL_27:
        *(_DWORD *)a3 = v4;
        return v3;
    }
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
