/*
 * XREFs of ?ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x14003E9D8
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x14003E8D0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStreamGroupDescriptor(struct STREAM_GROUP_DESCRIPTOR *a1)
{
  int v1; // eax
  unsigned int v3; // ecx
  _WORD *v4; // rax

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > 3u )
    return (unsigned int)-2147024809;
  v3 = 0;
  if ( !*((_DWORD *)a1 + 3) )
  {
    if ( *((_DWORD *)a1 + 21) )
      return (unsigned int)-2147024809;
  }
  if ( (unsigned int)(v1 - 2) <= 1 && (*((_DWORD *)a1 + 21) || *((_QWORD *)a1 + 2)) )
    return (unsigned int)-2147024809;
  v4 = (_WORD *)*((_QWORD *)a1 + 2);
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 3) < 0x12u || *v4 == 0xFFFE && *((_DWORD *)a1 + 3) < 0x28u )
      return (unsigned int)-2147024809;
  }
  if ( *((_DWORD *)a1 + 9) < 0x12u
    || **((_WORD **)a1 + 5) == 0xFFFE && *((_DWORD *)a1 + 9) < 0x28u
    || *((_DWORD *)a1 + 20) && *((_DWORD *)a1 + 20) != 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
