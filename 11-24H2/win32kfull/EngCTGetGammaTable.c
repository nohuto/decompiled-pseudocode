/*
 * XREFs of EngCTGetGammaTable @ 0x140204BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax
  const BYTE *v4; // rcx

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&unk_14034FA80;
    v4 = (const BYTE *)&unk_14034FA80;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_1403563E0;
    v4 = (const BYTE *)&unk_1403564E0;
  }
  else if ( ulGamma >= 0x514 )
  {
    if ( ulGamma >= 0x578 )
    {
      if ( ulGamma >= 0x5DC )
      {
        if ( ulGamma >= 0x640 )
        {
          if ( ulGamma >= 0x6A4 )
          {
            if ( ulGamma >= 0x708 )
            {
              if ( ulGamma >= 0x76C )
              {
                if ( ulGamma >= 0x7D0 )
                {
                  if ( ulGamma >= 0x834 )
                  {
                    if ( ulGamma >= 0x898 )
                    {
                      v3 = (const BYTE *)&unk_140350580;
                      v4 = (const BYTE *)&unk_140350680;
                    }
                    else
                    {
                      v3 = (const BYTE *)&unk_140350B80;
                      v4 = (const BYTE *)&unk_140350C80;
                    }
                  }
                  else
                  {
                    v3 = (const BYTE *)&unk_14034FB80;
                    v4 = (const BYTE *)&unk_14034FC80;
                  }
                }
                else
                {
                  v3 = (const BYTE *)&unk_140350D80;
                  v4 = (const BYTE *)&unk_140350E80;
                }
              }
              else
              {
                v3 = (const BYTE *)&unk_140350180;
                v4 = (const BYTE *)&unk_140350280;
              }
            }
            else
            {
              v3 = (const BYTE *)&unk_140350980;
              v4 = (const BYTE *)&unk_140350A80;
            }
          }
          else
          {
            v3 = (const BYTE *)&unk_14034FF80;
            v4 = (const BYTE *)&unk_140350080;
          }
        }
        else
        {
          v3 = (const BYTE *)&unk_140350F80;
          v4 = (const BYTE *)&unk_140351080;
        }
      }
      else
      {
        v3 = (const BYTE *)&unk_14034FD80;
        v4 = (const BYTE *)&unk_14034FE80;
      }
    }
    else
    {
      v3 = (const BYTE *)&unk_140350780;
      v4 = (const BYTE *)&unk_140350880;
    }
  }
  else
  {
    v3 = (const BYTE *)&unk_14034F880;
    v4 = (const BYTE *)&unk_14034F980;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
