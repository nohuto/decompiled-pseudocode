/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18005A580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v2; // r8
  float v3; // xmm0_4
  float v4; // xmm1_4

  v2 = 0LL;
  *a2 = 0.0;
  if ( *((_DWORD *)this + 22) )
  {
    v3 = 0.0;
    do
    {
      v4 = *(float *)(*((_QWORD *)this + 14) + 4 * v2);
      if ( v4 > v3 )
      {
        *a2 = v4;
        v3 = v4;
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 22) );
  }
  return 0LL;
}
