/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14002D850
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003F6CC (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx

  v2 = *((unsigned int *)this + 1958);
  if ( *((_QWORD *)this + 978) > (unsigned __int64)qword_140081440 )
  {
    v3 = v2 + dword_14008144C;
    *((_DWORD *)this + 1958) = v2 + dword_14008144C;
    if ( v3 > dword_140081448
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 980) > (unsigned __int64)qword_140081450 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 1) != 0 )
        McTemplateK0_EtwWriteTransfer(v2, &Dxgk_ExcessiveMemoryTransfer);
      *((_QWORD *)this + 980) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1958) = 0;
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
    }
  }
  else if ( (_DWORD)v2 )
  {
    *((_DWORD *)this + 1958) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 978, 0LL);
}
