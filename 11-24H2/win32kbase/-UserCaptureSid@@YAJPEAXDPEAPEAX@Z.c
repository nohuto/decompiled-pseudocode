/*
 * XREFs of ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x140131C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall UserCaptureSid(unsigned __int8 *a1, char a2, void **a3)
{
  unsigned __int8 *v4; // rdx
  void *v5; // rax
  ULONG Size; // [rsp+20h] [rbp-18h]
  unsigned __int8 v9; // [rsp+48h] [rbp+10h]

  if ( a2 )
  {
    v4 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
      v4 = (unsigned __int8 *)MmUserProbeAddress;
    v9 = *v4;
    Size = RtlLengthRequiredSid(*v4);
    if ( Size && ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v9 = a1[1];
    Size = RtlLengthRequiredSid(v9);
  }
  v5 = (void *)Win32AllocPoolZInitImpl(256LL, Size, 0x65737355u);
  *a3 = v5;
  if ( !v5 )
    return 3221225626LL;
  memmove(*a3, a1, Size);
  *((_BYTE *)*a3 + 1) = v9;
  if ( RtlValidSid(*a3) )
    return 0LL;
  GreDeleteFastMutex((char *)*a3);
  *a3 = 0LL;
  return 3221225592LL;
}
