/*
 * XREFs of ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14002695C
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateSubmixDescriptor(struct SUBMIX_DESCRIPTOR *a1)
{
  _WORD *v1; // rax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 > 3u )
  {
    v3 = 173LL;
    goto LABEL_18;
  }
  if ( !*((_DWORD *)a1 + 4) && *((_DWORD *)a1 + 23) )
  {
    v3 = 177LL;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)a1 == 2 || *(_DWORD *)a1 == 3) && (*((_DWORD *)a1 + 23) || *((_QWORD *)a1 + 3)) )
  {
    v3 = 182LL;
    goto LABEL_18;
  }
  if ( *((_DWORD *)a1 + 23) > 5u )
  {
    v3 = 185LL;
    goto LABEL_18;
  }
  v1 = (_WORD *)*((_QWORD *)a1 + 3);
  if ( v1 )
  {
    if ( *((_DWORD *)a1 + 4) < 0x12u )
    {
      v3 = 190LL;
      goto LABEL_18;
    }
    if ( *v1 == 0xFFFE && *((_DWORD *)a1 + 4) < 0x28u )
    {
      v3 = 191LL;
      goto LABEL_18;
    }
  }
  if ( *((_DWORD *)a1 + 10) < 0x12u )
  {
    v3 = 195LL;
  }
  else if ( **((_WORD **)a1 + 6) == 0xFFFE && *((_DWORD *)a1 + 10) < 0x28u )
  {
    v3 = 196LL;
  }
  else
  {
    if ( !*((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 22) == 3 )
      return 0LL;
    v3 = 199LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
