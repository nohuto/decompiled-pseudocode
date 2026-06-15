/*
 * XREFs of ??_G?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CC640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800CC0F4 (--1-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::~Module<1,Windows::Internal::SvcHostModule>(
    a1,
    a2,
    a3,
    a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
