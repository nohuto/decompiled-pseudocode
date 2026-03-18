/*
 * XREFs of NtDCompositionCreateChannel @ 0x14011F760
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x14006CF98 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionCreateChannel(void *a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  int v6; // ebx
  unsigned int Src; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-34h] BYREF
  void *v10; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  Src = 0;
  v11 = 0;
  v10 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v9 = 0;
    RtlCopyFromUser(&v9, a2, 4uLL);
    v11 = v9;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v6 = DirectComposition::CApplicationChannel::Create(&Src, &v11, &v10);
    if ( v6 >= 0 )
    {
      *a2 = v11;
      RtlCopyToUser(a1, &Src, 4uLL);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_QWORD *)MmUserProbeAddress;
      *v3 = v10;
    }
  }
  return (unsigned int)v6;
}
