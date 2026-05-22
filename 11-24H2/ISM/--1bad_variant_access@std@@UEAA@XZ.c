/*
 * XREFs of ??1bad_variant_access@std@@UEAA@XZ @ 0x1800A6A24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_variant_access::~bad_variant_access(std::bad_variant_access *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
