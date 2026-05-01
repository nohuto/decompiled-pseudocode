/*
 * XREFs of ??1KGLUpdateLocationInfo@@QEAA@XZ @ 0x18021CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall KGLUpdateLocationInfo::~KGLUpdateLocationInfo(HSTRING *this)
{
  Windows::Internal::String::~String(this + 8);
  Windows::Internal::String::~String(this + 7);
  Windows::Internal::String::~String(this + 6);
}
