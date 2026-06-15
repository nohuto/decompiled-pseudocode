/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x180077EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v5; // ebx
  float *v6; // rcx

  v5 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_11;
  if ( a2 == -1 )
    a2 = *((_DWORD *)this + 28);
  if ( a2 >= *((_DWORD *)this + 29) )
  {
    v5 = -2147024809;
LABEL_11:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeRange", 261, v5);
    return v5;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (float *)(*((_QWORD *)this + 10) + ((unsigned __int64)a2 << 6));
  v5 = 0;
  *a3 = v6[2];
  *a4 = v6[3];
  *a5 = v6[4];
  return v5;
}
