/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x14032FC20 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x14032FC60 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x14032FC90 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x14032FE30 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x14032FE70 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x14032FEE0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x14032FF10 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x14032FF70 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x14032FFD0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x140330020 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x140330090 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1403300C0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x140330120 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // edx

  v2 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( (*(_DWORD *)(v3 + 4768) & 4) != 0 )
  {
    if ( *(_DWORD *)(v3 + 4772) )
      goto LABEL_6;
    v4 = MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(v3 + 4760) + 0x117D78400LL )
    {
      *(_DWORD *)(v3 + 4772) = 1;
      *(_DWORD *)(v3 + 4776) = v4;
    }
    if ( *(_DWORD *)(v3 + 4772) )
    {
LABEL_6:
      if ( (RtlRandom((PULONG)(v3 + 4776)) & *(_DWORD *)(v3 + 4780)) == 0 )
        return 1;
    }
  }
  return v2;
}
