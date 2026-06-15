/*
 * XREFs of ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x18006BDB8
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18005ADAC (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CAudioStream::GetMinStreamChannelVolume(CAudioStream *this)
{
  float result; // xmm0_4
  float *v2; // rax
  __int64 v3; // rdx
  float v4; // xmm1_4

  result = FLOAT_1_0;
  if ( *((_DWORD *)this + 24) )
  {
    v2 = (float *)*((_QWORD *)this + 16);
    v3 = *((unsigned int *)this + 24);
    do
    {
      v4 = *v2++;
      result = fminf(v4, result);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
